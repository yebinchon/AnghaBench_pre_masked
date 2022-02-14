
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_scb {int scbidx; int status; } ;
struct orc_host {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct orc_host * VAR_2, struct orc_scb * VAR_3)
{
 VAR_3->status = VAR_0;
 FUNC_0(VAR_3->scbidx, VAR_2->base + VAR_1);
}
