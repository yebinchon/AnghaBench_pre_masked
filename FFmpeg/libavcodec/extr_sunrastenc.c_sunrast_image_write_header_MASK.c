
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int maplength; int p; int maptype; int type; int length; int depth; } ;
typedef TYPE_1__ SUNRASTContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1)
{
    SUNRASTContext *VAR_2 = VAR_1->priv_data;

    FUNC_0(&VAR_2->p, VAR_0);
    FUNC_0(&VAR_2->p, VAR_1->width);
    FUNC_0(&VAR_2->p, VAR_1->height);
    FUNC_0(&VAR_2->p, VAR_2->depth);
    FUNC_0(&VAR_2->p, VAR_2->length);
    FUNC_0(&VAR_2->p, VAR_2->type);
    FUNC_0(&VAR_2->p, VAR_2->maptype);
    FUNC_0(&VAR_2->p, VAR_2->maplength);
}
