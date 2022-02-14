
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {scalar_t__ fd; char* filename; int inner; } ;
typedef TYPE_2__ Context ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (char const*,char*,char const**) ;
 scalar_t__ FUNC_3 (char*,char**,int ,TYPE_1__*) ;
 int FUNC_4 (int *,char const*,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_1, const char *VAR_2, int VAR_3, AVDictionary **VAR_4)
{
    int VAR_5;
    char *VAR_6;
    Context *VAR_7= VAR_1->priv_data;

    FUNC_2(VAR_2, "cache:", &VAR_2);

    VAR_7->fd = FUNC_3("ffcache", &VAR_6, 0, VAR_1);
    if (VAR_7->fd < 0){
        FUNC_1(VAR_1, VAR_0, "Failed to create tempfile\n");
        return VAR_7->fd;
    }

    VAR_5 = FUNC_5(VAR_6);

    if (VAR_5 >= 0)
        FUNC_0(&VAR_6);
    else
        VAR_7->filename = VAR_6;

    return FUNC_4(&VAR_7->inner, VAR_2, VAR_3, &VAR_1->interrupt_callback,
                                VAR_4, VAR_1->protocol_whitelist, VAR_1->protocol_blacklist, VAR_1);
}
