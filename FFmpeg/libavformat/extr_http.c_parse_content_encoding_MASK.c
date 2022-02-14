
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {char const* msg; } ;
struct TYPE_8__ {int compressed; TYPE_4__ inflate_stream; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, const char *VAR_4)
{
    if (!FUNC_2(VAR_4, "gzip", 4) ||
        !FUNC_2(VAR_4, "deflate", 7)) {
        FUNC_1(VAR_3, VAR_0,
               "Compressed (%s) content, need zlib with gzip support\n", VAR_4);
        return FUNC_0(VAR_1);

    } else if (!FUNC_2(VAR_4, "identity", 8)) {


    } else {
        FUNC_1(VAR_3, VAR_0, "Unknown content coding: %s\n", VAR_4);
    }
    return 0;
}
