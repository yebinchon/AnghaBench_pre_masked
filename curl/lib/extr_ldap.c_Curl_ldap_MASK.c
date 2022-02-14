
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int timeval ;
struct TYPE_21__ {char* name; int dispname; } ;
struct TYPE_18__ {char* CAfile; scalar_t__ verifypeer; } ;
struct TYPE_17__ {scalar_t__ user_passwd; } ;
struct connectdata {char* user; char* passwd; scalar_t__ port; TYPE_7__ host; TYPE_4__ ssl_config; TYPE_3__ bits; TYPE_2__* given; struct Curl_easy* data; } ;
struct TYPE_19__ {scalar_t__ cert_type; } ;
struct TYPE_20__ {TYPE_5__ ssl; } ;
struct TYPE_15__ {int url; } ;
struct Curl_easy {TYPE_6__ set; TYPE_1__ change; } ;
typedef scalar_t__ curl_off_t ;
struct TYPE_23__ {char* bv_val; int bv_len; } ;
struct TYPE_22__ {int lud_attrs; int lud_filter; int lud_scope; int lud_dn; } ;
struct TYPE_16__ {int flags; } ;
typedef char TCHAR ;
typedef TYPE_8__ LDAPURLDesc ;
typedef int LDAPMessage ;
typedef int LDAP ;
typedef scalar_t__ CURLcode ;
typedef TYPE_9__ BerValue ;
typedef int BerElement ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,int,char**,size_t*) ;
 scalar_t__ FUNC_1 (struct connectdata*,int ,char*,int) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct Curl_easy*,scalar_t__) ;
 int FUNC_5 (struct Curl_easy*,int,int,int ,int) ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (char*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_8 (struct connectdata*,TYPE_8__**) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct connectdata*,char*) ;
 int FUNC_11 (struct Curl_easy*,char*,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct Curl_easy*,char*,...) ;
 char* FUNC_14 (int) ;
 char* FUNC_15 (int *,int *,int **) ;
 int * FUNC_16 (int *,int *) ;
 int FUNC_17 (TYPE_8__*) ;
 char* FUNC_18 (int *,int *) ;
 TYPE_9__** FUNC_19 (int *,int *,char*) ;
 int * FUNC_20 (char*,int) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int *) ;
 char* FUNC_23 (int *,int *,int *) ;
 int * FUNC_24 (int *,int *) ;
 int FUNC_25 (int *,int ,int ,int ,int ,int ,int **) ;
 int FUNC_26 (int *,int ,...) ;
 int FUNC_27 (int *,char*,char*) ;
 int * FUNC_28 (char*,int,int) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int,TYPE_8__**) ;
 int FUNC_31 (TYPE_9__**) ;
 int FUNC_32 (struct connectdata*,int *,char*,char*) ;
 int FUNC_33 (char*,int) ;
 int FUNC_34 () ;
 int FUNC_35 (int *,int *) ;
 int * FUNC_36 (char*,int,int) ;
 int FUNC_37 (int) ;
 scalar_t__ FUNC_38 (scalar_t__,char*) ;
 scalar_t__ FUNC_39 (char*,char*) ;
 size_t FUNC_40 (char*) ;

__attribute__((used)) static CURLcode FUNC_41(struct connectdata *VAR_31, bool *VAR_32)
{
  CURLcode VAR_33 = VAR_5;
  int VAR_34 = 0;
  LDAP *VAR_35 = ((void*)0);
  LDAPURLDesc *VAR_36 = ((void*)0);
  LDAPMessage *VAR_37 = ((void*)0);
  LDAPMessage *VAR_38;
  int VAR_39 = 0;
  struct Curl_easy *VAR_40 = VAR_31->data;
  int VAR_41 = VAR_28;
  int VAR_42 = 0;
  char *VAR_43 = ((void*)0);
  size_t VAR_44 = 0;
  curl_off_t VAR_45 = 0;






  char *VAR_46 = ((void*)0);

  char *VAR_47 = ((void*)0);
  char *VAR_48 = ((void*)0);

  *VAR_32 = VAR_30;
  FUNC_13(VAR_40, "LDAP local: LDAP Vendor = %s ; LDAP Version = %d\n",
          VAR_25, VAR_26);
  FUNC_13(VAR_40, "LDAP local: %s\n", VAR_40->change.url);




  VAR_34 = FUNC_8(VAR_31, &VAR_36);

  if(VAR_34 != 0) {
    FUNC_11(VAR_40, "LDAP local: %s", FUNC_14(VAR_34));
    VAR_33 = VAR_3;
    goto quit;
  }


  if(VAR_31->given->flags & VAR_29)
    VAR_42 = 1;
  FUNC_13(VAR_40, "LDAP local: trying to establish %s connection\n",
          VAR_42 ? "encrypted" : "cleartext");
  VAR_46 = VAR_31->host.name;


  if(VAR_31->bits.user_passwd) {
    VAR_47 = VAR_31->user;
    VAR_48 = VAR_31->passwd;
  }




  FUNC_26(((void*)0), VAR_15, &VAR_41);

  if(VAR_42) {
  }
  else {
    VAR_35 = FUNC_20(VAR_46, (int)VAR_31->port);
    if(VAR_35 == ((void*)0)) {
      FUNC_11(VAR_40, "LDAP local: Cannot connect to %s:%ld",
            VAR_31->host.dispname, VAR_31->port);
      VAR_33 = VAR_1;
      goto quit;
    }
  }







  VAR_34 = FUNC_27(VAR_35, VAR_47, VAR_48);

  if(!VAR_42 && VAR_34 != 0) {
    VAR_41 = VAR_27;
    FUNC_26(VAR_35, VAR_15, &VAR_41);



    VAR_34 = FUNC_27(VAR_35, VAR_47, VAR_48);

  }
  if(VAR_34 != 0) {




    FUNC_11(VAR_40, "LDAP local: bind via ldap_simple_bind_s %s",
          FUNC_14(VAR_34));

    VAR_33 = VAR_2;
    goto quit;
  }

  VAR_34 = FUNC_25(VAR_35, VAR_36->lud_dn, VAR_36->lud_scope,
                     VAR_36->lud_filter, VAR_36->lud_attrs, 0, &VAR_37);

  if(VAR_34 != 0 && VAR_34 != VAR_23) {
    FUNC_11(VAR_40, "LDAP remote: %s", FUNC_14(VAR_34));
    VAR_33 = VAR_4;
    goto quit;
  }

  for(VAR_39 = 0, VAR_38 = FUNC_16(VAR_35, VAR_37);
      VAR_38;
      VAR_38 = FUNC_24(VAR_35, VAR_38), VAR_39++) {
    BerElement *VAR_49 = ((void*)0);



    char *VAR_50;

    int VAR_51;


    {
      char *VAR_52;
      size_t VAR_53;
      char *VAR_54 = VAR_52 = FUNC_18(VAR_35, VAR_38);

      VAR_53 = FUNC_40(VAR_52);

      VAR_33 = FUNC_1(VAR_31, VAR_0, (char *)"DN: ", 4);
      if(VAR_33) {



        FUNC_21(VAR_54);

        goto quit;
      }

      VAR_33 = FUNC_1(VAR_31, VAR_0, (char *) VAR_52,
                                 VAR_53);
      if(VAR_33) {



        FUNC_21(VAR_54);

        goto quit;
      }

      VAR_33 = FUNC_1(VAR_31, VAR_0, (char *)"\n", 1);
      if(VAR_33) {



        FUNC_21(VAR_54);

        goto quit;
      }

      VAR_45 += VAR_53 + 5;




      FUNC_21(VAR_54);
    }


    for(VAR_50 = FUNC_15(VAR_35, VAR_38, &VAR_49);
        VAR_50;
        VAR_50 = FUNC_23(VAR_35, VAR_38, VAR_49)) {
      BerValue **VAR_55;
      size_t VAR_56;
      char *VAR_57 = VAR_50;

      VAR_56 = FUNC_40(VAR_57);

      VAR_55 = FUNC_19(VAR_35, VAR_38, VAR_50);
      if(VAR_55 != ((void*)0)) {
        for(VAR_51 = 0; (VAR_55[VAR_51] != ((void*)0)); VAR_51++) {
          VAR_33 = FUNC_1(VAR_31, VAR_0, (char *)"\t", 1);
          if(VAR_33) {
            FUNC_31(VAR_55);



            FUNC_21(VAR_50);
            if(VAR_49)
              FUNC_9(VAR_49, 0);

            goto quit;
          }

          VAR_33 = FUNC_1(VAR_31, VAR_0,
                                     (char *) VAR_57, VAR_56);
          if(VAR_33) {
            FUNC_31(VAR_55);



            FUNC_21(VAR_50);
            if(VAR_49)
              FUNC_9(VAR_49, 0);

            goto quit;
          }

          VAR_33 = FUNC_1(VAR_31, VAR_0, (char *)": ", 2);
          if(VAR_33) {
            FUNC_31(VAR_55);



            FUNC_21(VAR_50);
            if(VAR_49)
              FUNC_9(VAR_49, 0);

            goto quit;
          }

          VAR_45 += VAR_56 + 3;

          if((VAR_56 > 7) &&
             (FUNC_39(";binary", (char *) VAR_57 + (VAR_56 - 7)) == 0)) {

            VAR_33 = FUNC_0(VAR_40,
                                        VAR_55[VAR_51]->bv_val,
                                        VAR_55[VAR_51]->bv_len,
                                        &VAR_43,
                                        &VAR_44);
            if(VAR_33) {
              FUNC_31(VAR_55);



              FUNC_21(VAR_50);
              if(VAR_49)
                FUNC_9(VAR_49, 0);

              goto quit;
            }

            if(VAR_44 > 0) {
              VAR_33 = FUNC_1(VAR_31, VAR_0, VAR_43,
                                         VAR_44);
              FUNC_12(VAR_43);
              if(VAR_33) {
                FUNC_31(VAR_55);



                FUNC_21(VAR_50);
                if(VAR_49)
                  FUNC_9(VAR_49, 0);

                goto quit;
              }

              VAR_45 += VAR_44;
            }
          }
          else {
            VAR_33 = FUNC_1(VAR_31, VAR_0, VAR_55[VAR_51]->bv_val,
                                       VAR_55[VAR_51]->bv_len);
            if(VAR_33) {
              FUNC_31(VAR_55);



              FUNC_21(VAR_50);
              if(VAR_49)
                FUNC_9(VAR_49, 0);

              goto quit;
            }

            VAR_45 += VAR_55[VAR_51]->bv_len;
          }

          VAR_33 = FUNC_1(VAR_31, VAR_0, (char *)"\n", 1);
          if(VAR_33) {
            FUNC_31(VAR_55);



            FUNC_21(VAR_50);
            if(VAR_49)
              FUNC_9(VAR_49, 0);

            goto quit;
          }

          VAR_45++;
        }


        FUNC_31(VAR_55);
      }





      FUNC_21(VAR_50);

      VAR_33 = FUNC_1(VAR_31, VAR_0, (char *)"\n", 1);
      if(VAR_33)
        goto quit;
      VAR_45++;
      FUNC_4(VAR_40, VAR_45);
    }

    if(VAR_49)
       FUNC_9(VAR_49, 0);
  }

quit:
  if(VAR_37) {
    FUNC_22(VAR_37);
    FUNC_7(("Received %d entries\n", VAR_39));
  }
  if(VAR_34 == VAR_23)
    FUNC_13(VAR_40, "There are more than %d entries\n", VAR_39);
  if(VAR_36)
    FUNC_17(VAR_36);
  if(VAR_35)
    FUNC_29(VAR_35);
  FUNC_5(VAR_40, -1, -1, VAR_8, -1);
  FUNC_10(VAR_31, "LDAP connection always disable re-use");

  return VAR_33;
}
