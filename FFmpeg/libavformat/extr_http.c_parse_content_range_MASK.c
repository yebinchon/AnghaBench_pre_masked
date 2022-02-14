
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int filesize; int seekable; int is_akamai; void* off; } ;
typedef TYPE_2__ HTTPContext ;


 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;
 void* FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static void FUNC_4(URLContext *VAR_0, const char *VAR_1)
{
    HTTPContext *VAR_2 = VAR_0->priv_data;
    const char *VAR_3;

    if (!FUNC_2(VAR_1, "bytes ", 6)) {
        VAR_1 += 6;
        VAR_2->off = FUNC_3(VAR_1, ((void*)0), 10);
        if ((VAR_3 = FUNC_0(VAR_1, '/')) && FUNC_1(VAR_3) > 0)
            VAR_2->filesize = FUNC_3(VAR_3 + 1, ((void*)0), 10);
    }
    if (VAR_2->seekable == -1 && (!VAR_2->is_akamai || VAR_2->filesize != 2147483647))
        VAR_0->is_streamed = 0;
}
