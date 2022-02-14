
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {int extensions_present; unsigned long path_len_constraint; int subject; int issuer; struct x509_certificate* next; scalar_t__ not_after; scalar_t__ not_before; } ;
struct os_time {scalar_t__ sec; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct os_time*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct x509_certificate*,struct x509_certificate*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (struct x509_certificate*) ;

int FUNC_6(struct x509_certificate *VAR_8,
        struct x509_certificate *VAR_9,
        int *VAR_10, int VAR_11)
{
 long unsigned VAR_12;
 int VAR_13 = 0;
 struct x509_certificate *VAR_14, *VAR_15;
 char VAR_16[128];
 struct os_time VAR_17;

 *VAR_10 = VAR_6;

 FUNC_1(VAR_0, "X509: Validate certificate chain");
 FUNC_0(&VAR_17);

 for (VAR_14 = VAR_9, VAR_12 = 0; VAR_14; VAR_14 = VAR_14->next, VAR_12++) {
  FUNC_4(&VAR_14->subject, VAR_16, sizeof(VAR_16));
  FUNC_1(VAR_0, "X509: %lu: %s", VAR_12, VAR_16);

  if (VAR_13)
   continue;

  if (!VAR_11 &&
      ((unsigned long) VAR_17.sec <
       (unsigned long) VAR_14->not_before ||
       (unsigned long) VAR_17.sec >
       (unsigned long) VAR_14->not_after)) {
   FUNC_1(VAR_1, "X509: Certificate not valid "
       "(now=%lu not_before=%lu not_after=%lu)",
       VAR_17.sec, VAR_14->not_before, VAR_14->not_after);
   *VAR_10 = VAR_4;
   return -1;
  }

  if (VAR_14->next) {
   if (FUNC_3(&VAR_14->issuer,
           &VAR_14->next->subject) != 0) {
    FUNC_1(VAR_0, "X509: Certificate "
        "chain issuer name mismatch");
    FUNC_4(&VAR_14->issuer, VAR_16,
       sizeof(VAR_16));
    FUNC_1(VAR_0, "X509: cert issuer: %s",
        VAR_16);
    FUNC_4(&VAR_14->next->subject, VAR_16,
       sizeof(VAR_16));
    FUNC_1(VAR_0, "X509: next cert "
        "subject: %s", VAR_16);
    *VAR_10 = VAR_5;
    return -1;
   }

   if (FUNC_5(VAR_14->next) < 0) {
    *VAR_10 = VAR_3;
    return -1;
   }

   if ((VAR_14->next->extensions_present &
        VAR_2) &&
       VAR_12 > VAR_14->next->path_len_constraint) {
    FUNC_1(VAR_0, "X509: pathLenConstraint"
        " not met (idx=%lu issuer "
        "pathLenConstraint=%lu)", VAR_12,
        VAR_14->next->path_len_constraint);
    *VAR_10 = VAR_3;
    return -1;
   }

   if (FUNC_2(VAR_14->next, VAR_14)
       < 0) {
    FUNC_1(VAR_0, "X509: Invalid "
        "certificate signature within "
        "chain");
    *VAR_10 = VAR_3;
    return -1;
   }
  }

  for (VAR_15 = VAR_8; VAR_15; VAR_15 = VAR_15->next) {
   if (FUNC_3(&VAR_14->issuer, &VAR_15->subject)
       == 0)
    break;
  }

  if (VAR_15) {
   FUNC_1(VAR_0, "X509: Found issuer from the "
       "list of trusted certificates");
   if (FUNC_5(VAR_15) < 0) {
    *VAR_10 = VAR_3;
    return -1;
   }

   if (FUNC_2(VAR_15, VAR_14) < 0)
   {
    FUNC_1(VAR_0, "X509: Invalid "
        "certificate signature");
    *VAR_10 = VAR_3;
    return -1;
   }

   FUNC_1(VAR_0, "X509: Trusted certificate "
       "found to complete the chain");
   VAR_13 = 1;
  }
 }

 if (!VAR_13) {
  FUNC_1(VAR_0, "X509: Did not find any of the issuers "
      "from the list of trusted certificates");
  if (VAR_8) {
   *VAR_10 = VAR_7;
   return -1;
  }
  FUNC_1(VAR_0, "X509: Certificate chain validation "
      "disabled - ignore unknown CA issue");
 }

 FUNC_1(VAR_0, "X509: Certificate chain valid");

 return 0;
}
