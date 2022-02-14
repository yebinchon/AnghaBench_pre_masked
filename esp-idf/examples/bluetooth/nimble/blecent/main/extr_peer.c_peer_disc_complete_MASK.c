
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int disc_cb_arg; int (* disc_cb ) (struct peer*,int,int ) ;scalar_t__ disc_prev_chr_val; } ;


 int FUNC_0 (struct peer*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct peer *VAR_0, int VAR_1)
{
    VAR_0->disc_prev_chr_val = 0;


    if (VAR_0->disc_cb != ((void*)0)) {
        VAR_0->disc_cb(VAR_0, VAR_1, VAR_0->disc_cb_arg);
    }
}
