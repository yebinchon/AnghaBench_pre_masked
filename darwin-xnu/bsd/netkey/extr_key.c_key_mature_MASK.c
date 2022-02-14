
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct secasvar {int flags; int alg_enc; TYPE_4__* key_enc; TYPE_3__* key_auth; int alg_auth; int spi; TYPE_2__* sah; } ;
struct ipcomp_algorithm {int dummy; } ;
struct esp_algorithm {int keymin; int keymax; scalar_t__ (* mature ) (struct secasvar*) ;} ;
struct ah_algorithm {int keymin; int keymax; scalar_t__ (* mature ) (struct secasvar*) ;} ;
struct TYPE_8__ {int sadb_key_bits; } ;
struct TYPE_7__ {int sadb_key_bits; } ;
struct TYPE_5__ {int proto; } ;
struct TYPE_6__ {TYPE_1__ saidx; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ah_algorithm* FUNC_1 (int ) ;
 struct esp_algorithm* FUNC_2 (int ) ;
 struct ipcomp_algorithm* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct secasvar*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (struct secasvar*) ;
 scalar_t__ FUNC_8 (struct secasvar*) ;

__attribute__((used)) static int
FUNC_9(
     struct secasvar *VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;

 VAR_14 = 0;

 FUNC_0(VAR_12, VAR_2);


 switch (VAR_13->sah->saidx.proto) {
  case 129:
  case 130:


   if (FUNC_6(VAR_13->spi) <= 255) {
    FUNC_4((VAR_3,
        "key_mature: illegal range of SPI %u.\n",
        (u_int32_t)FUNC_6(VAR_13->spi)));
    return VAR_0;
   }
   break;
 }


 switch (VAR_13->sah->saidx.proto) {
  case 129:

   if ((VAR_13->flags & VAR_10)
    && (VAR_13->flags & VAR_9)) {
    FUNC_4((VAR_3, "key_mature: "
        "invalid flag (derived) given to old-esp.\n"));
    return VAR_0;
   }
   if (VAR_13->alg_auth == VAR_4)
    VAR_15 = 1;
   else
    VAR_15 = 3;
   VAR_16 = 1;
   break;
  case 130:

   if (VAR_13->flags & VAR_9) {
    FUNC_4((VAR_3, "key_mature: "
        "invalid flag (derived) given to AH SA.\n"));
    return VAR_0;
   }
   if (VAR_13->alg_enc != VAR_5) {
    FUNC_4((VAR_3, "key_mature: "
        "protocol and algorithm mismated.\n"));
    return(VAR_0);
   }
   VAR_15 = 2;
   VAR_16 = 2;
   break;
  case 128:
   if (VAR_13->alg_auth != VAR_4) {
    FUNC_4((VAR_3, "key_mature: "
        "protocol and algorithm mismated.\n"));
    return(VAR_0);
   }
   if ((VAR_13->flags & VAR_11) == 0
    && FUNC_6(VAR_13->spi) >= 0x10000) {
    FUNC_4((VAR_3, "key_mature: invalid cpi for IPComp.\n"));
    return(VAR_0);
   }
   VAR_15 = 4;
   VAR_16 = 4;
   break;
  default:
   FUNC_4((VAR_3, "key_mature: Invalid satype.\n"));
   return VAR_1;
 }


 if ((VAR_15 & 2) != 0) {
  const struct ah_algorithm *VAR_17;
  int VAR_18;

  VAR_17 = FUNC_1(VAR_13->alg_auth);
  if (!VAR_17) {
   FUNC_4((VAR_3,"key_mature: "
       "unknown authentication algorithm.\n"));
   return VAR_0;
  }


  if (VAR_13->key_auth)
   VAR_18 = VAR_13->key_auth->sadb_key_bits;
  else
   VAR_18 = 0;
  if (VAR_18 < VAR_17->keymin || VAR_17->keymax < VAR_18) {
   FUNC_4((VAR_3,
       "key_mature: invalid AH key length %d "
       "(%d-%d allowed)\n",
       VAR_18, VAR_17->keymin, VAR_17->keymax));
   return VAR_0;
  }

  if (VAR_17->mature) {
   if ((*VAR_17->mature)(VAR_13)) {

    return VAR_0;
   } else
    VAR_14 = VAR_7;
  }

  if ((VAR_16 & 2) != 0 && VAR_14 != VAR_7) {
   FUNC_4((VAR_3, "key_mature: no satisfy algorithm for AH\n"));
   return VAR_0;
  }
 }


 if ((VAR_15 & 1) != 0) {
  FUNC_4((VAR_3, "key_mature: ESP not supported in this configuration\n"));
  return VAR_0;

 }


 if ((VAR_15 & 4) != 0) {
  const struct ipcomp_algorithm *VAR_19;


  VAR_19 = FUNC_3(VAR_13->alg_enc);
  if (!VAR_19) {
   FUNC_4((VAR_3, "key_mature: unknown compression algorithm.\n"));
   return VAR_0;
  }
 }

 FUNC_5(VAR_13, VAR_6);

 return 0;
}
