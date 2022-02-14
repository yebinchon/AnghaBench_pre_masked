
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* long_name; char* extensions; scalar_t__ priv_class; } ;
typedef TYPE_1__ AVInputFormat ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2)
{
    const AVInputFormat *VAR_3 = FUNC_0(VAR_2);

    if (!VAR_3) {
        FUNC_1(((void*)0), VAR_0, "Unknown format '%s'.\n", VAR_2);
        return;
    }

    FUNC_2("Demuxer %s [%s]:\n", VAR_3->name, VAR_3->long_name);

    if (VAR_3->extensions)
        FUNC_2("    Common extensions: %s.\n", VAR_3->extensions);

    if (VAR_3->priv_class)
        FUNC_3(VAR_3->priv_class, VAR_1);
}
