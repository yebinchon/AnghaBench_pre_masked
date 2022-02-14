
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* ctrl ) (TYPE_2__*,int ,int *) ;int list; } ;
struct layer2 {TYPE_2__ ch; int tei; TYPE_1__* tm; } ;
struct TYPE_3__ {int mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (struct layer2*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct layer2 *VAR_3)
{
 FUNC_1(VAR_3->tm->mgr, VAR_1, 0, VAR_3->tei);
 FUNC_3(VAR_3, VAR_2, 0);
 FUNC_0(&VAR_3->ch.list);
 VAR_3->ch.ctrl(&VAR_3->ch, VAR_0, ((void*)0));
}
