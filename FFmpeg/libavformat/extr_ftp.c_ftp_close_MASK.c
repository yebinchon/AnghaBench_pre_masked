
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int features; int path; int hostname; int password; int user; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0)
{
    FTPContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_0, "ftp protocol close\n");

    FUNC_2(VAR_1);
    FUNC_0(&VAR_1->user);
    FUNC_0(&VAR_1->password);
    FUNC_0(&VAR_1->hostname);
    FUNC_0(&VAR_1->path);
    FUNC_0(&VAR_1->features);

    return 0;
}
