
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct curl_tlssessioninfo {int backend; int internals; } ;
typedef int gnutls_x509_crt_t ;
struct TYPE_5__ {char* size; int data; } ;
typedef TYPE_1__ gnutls_datum_t ;
typedef int CURLcode ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct curl_tlssessioninfo const**) ;
 int FUNC_1 (int ,char*,unsigned int,char*,int ) ;
 TYPE_1__* FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__ const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_8(void *VAR_6, size_t VAR_7, size_t VAR_8, void *VAR_9)
{
  const struct curl_tlssessioninfo *VAR_10;
  unsigned int VAR_11;
  const gnutls_datum_t *VAR_12;
  CURLcode VAR_13;

  (void)VAR_9;
  (void)VAR_6;

  VAR_13 = FUNC_0(VAR_4, VAR_0, &VAR_10);

  if(!VAR_13) {
    switch(VAR_10->backend) {
    case 129:

      VAR_12 = FUNC_2(VAR_10->internals, &VAR_11);
      if((VAR_12) && (VAR_11)) {
        unsigned int VAR_14;

        for(VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
          gnutls_x509_crt_t VAR_15;
          gnutls_datum_t VAR_16;

          if(VAR_2 == FUNC_6(&VAR_15)) {
            if(VAR_2 ==
               FUNC_5(VAR_15, &VAR_12[VAR_14], VAR_3)) {
              if(VAR_2 ==
                 FUNC_7(VAR_15, VAR_1, &VAR_16)) {
                FUNC_1(VAR_5, "Certificate #%u: %.*s", VAR_14, VAR_16.size, VAR_16.data);

                FUNC_3(VAR_16.data);
              }
            }

            FUNC_4(VAR_15);
          }
        }
      }
      break;
    case 128:
    default:
      break;
    }
  }

  return VAR_7 * VAR_8;
}
