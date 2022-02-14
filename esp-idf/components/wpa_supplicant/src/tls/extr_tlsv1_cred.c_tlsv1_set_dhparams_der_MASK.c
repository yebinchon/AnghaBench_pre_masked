
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_credentials {scalar_t__ dh_p_len; scalar_t__ dh_g_len; int * dh_g; int * dh_p; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; scalar_t__ length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int ,char*,int *,scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct tlsv1_credentials *VAR_5,
      const u8 *VAR_6, size_t VAR_7)
{
 struct asn1_hdr VAR_8;
 const u8 *VAR_9, *VAR_10;

 VAR_9 = VAR_6;
 VAR_10 = VAR_6 + VAR_7;
 if (FUNC_0(VAR_9, VAR_7, &VAR_8) < 0 ||
     VAR_8.class != VAR_0 ||
     VAR_8.tag != VAR_2) {
  FUNC_5(VAR_3, "DH: DH parameters did not start with a "
      "valid SEQUENCE - found class %d tag 0x%x",
      VAR_8.class, VAR_8.tag);
  return -1;
 }
 VAR_9 = VAR_8.payload;


 if (FUNC_0(VAR_9, VAR_10 - VAR_9, &VAR_8) < 0)
  return -1;

 if (VAR_8.class != VAR_0 ||
     VAR_8.tag != VAR_1) {
  FUNC_5(VAR_3, "DH: No INTEGER tag found for p; "
      "class=%d tag=0x%x", VAR_8.class, VAR_8.tag);
  return -1;
 }

 FUNC_4(VAR_4, "DH: prime (p)", VAR_8.payload, VAR_8.length);
 if (VAR_8.length == 0)
  return -1;
 FUNC_1(VAR_5->dh_p);
 VAR_5->dh_p = FUNC_2(VAR_8.length);
 if (VAR_5->dh_p == ((void*)0))
  return -1;
 FUNC_3(VAR_5->dh_p, VAR_8.payload, VAR_8.length);
 VAR_5->dh_p_len = VAR_8.length;
 VAR_9 = VAR_8.payload + VAR_8.length;


 if (FUNC_0(VAR_9, VAR_10 - VAR_9, &VAR_8) < 0)
  return -1;

 if (VAR_8.class != VAR_0 ||
     VAR_8.tag != VAR_1) {
  FUNC_5(VAR_3, "DH: No INTEGER tag found for g; "
      "class=%d tag=0x%x", VAR_8.class, VAR_8.tag);
  return -1;
 }

 FUNC_4(VAR_4, "DH: base (g)", VAR_8.payload, VAR_8.length);
 if (VAR_8.length == 0)
  return -1;
 FUNC_1(VAR_5->dh_g);
 VAR_5->dh_g = FUNC_2(VAR_8.length);
 if (VAR_5->dh_g == ((void*)0))
  return -1;
 FUNC_3(VAR_5->dh_g, VAR_8.payload, VAR_8.length);
 VAR_5->dh_g_len = VAR_8.length;

 return 0;
}
