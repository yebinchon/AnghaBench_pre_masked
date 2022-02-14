
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* alpn_string; char** alpn_list; int alpn_status; } ;
struct TYPE_5__ {TYPE_1__ ssl_alpn; } ;
typedef TYPE_2__ SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char const*,unsigned int) ;
 char* FUNC_1 (unsigned int) ;

int FUNC_2(SSL_CTX *VAR_2, const unsigned char *VAR_3, unsigned VAR_4)
{
     VAR_2->ssl_alpn.alpn_string = FUNC_1(VAR_4 + 1);
     if (! VAR_2->ssl_alpn.alpn_string) {
   return 1;
     }
     VAR_2->ssl_alpn.alpn_status = VAR_0;
     FUNC_0(VAR_2->ssl_alpn.alpn_string, VAR_3, VAR_4);

     char *VAR_5 = VAR_2->ssl_alpn.alpn_string;
     int VAR_6;

     for (VAR_6 = 0; VAR_6 < VAR_1 - 1; VAR_6++) {
   char VAR_7 = *VAR_5;
   *VAR_5 = '\0';
   VAR_5++;
   VAR_4--;
   VAR_2->ssl_alpn.alpn_list[VAR_6] = VAR_5;
   VAR_5 += VAR_7;
   VAR_4 -= VAR_7;
   if (! VAR_4) {
        VAR_6++;
        break;
   }
     }
     VAR_2->ssl_alpn.alpn_list[VAR_6] = ((void*)0);
     return 0;
}
