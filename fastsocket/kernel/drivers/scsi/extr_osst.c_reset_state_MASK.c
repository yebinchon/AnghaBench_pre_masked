
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_partstat {int drv_block; int drv_file; scalar_t__ last_block_valid; scalar_t__ at_sm; int eof; int rw; } ;
struct osst_tape {struct st_partstat* ps; scalar_t__ pos_unknown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct osst_tape *VAR_3)
{
 int VAR_4;
 struct st_partstat *VAR_5;

 VAR_3->pos_unknown = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &(VAR_3->ps[VAR_4]);
  VAR_5->rw = VAR_0;
  VAR_5->eof = VAR_2;
  VAR_5->at_sm = 0;
  VAR_5->last_block_valid = 0;
  VAR_5->drv_block = -1;
  VAR_5->drv_file = -1;
 }
}
