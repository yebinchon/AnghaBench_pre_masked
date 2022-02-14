
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_partstat {scalar_t__ drv_file; int eof; scalar_t__ drv_block; } ;
struct osst_tape {size_t partition; scalar_t__ write_type; struct st_partstat* ps; } ;
struct osst_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct osst_tape*,struct osst_request**) ;
 int FUNC_1 (struct osst_tape*,struct osst_request**) ;
 int FUNC_2 (struct osst_tape*,struct osst_request**) ;
 int FUNC_3 (struct osst_tape*,struct osst_request**,int) ;

__attribute__((used)) static int FUNC_4(struct osst_tape *VAR_2, struct osst_request ** VAR_3, int VAR_4)
{
 struct st_partstat * VAR_5 = &(VAR_2->ps[VAR_2->partition]);
 int VAR_6 = 0;

 if (VAR_2->write_type != VAR_0) {

  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 < 0) goto out;
  VAR_6 = FUNC_2(VAR_2, VAR_3);
  if (VAR_6 < 0) goto out;

  if (VAR_5->drv_file >= 0)
   VAR_5->drv_file++ ;
  VAR_5->drv_block = 0;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3, VAR_4);

 VAR_5->eof = VAR_1;
out:
 return VAR_6;
}
