
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_req {int status; int start_count; int sccb; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct sclp_req *VAR_11)
{
 int VAR_12;

 if (VAR_8 != VAR_9)
  return 0;
 FUNC_1(&VAR_7);
 VAR_12 = FUNC_2(VAR_11->command, VAR_11->sccb);
 VAR_11->start_count++;

 if (VAR_12 == 0) {

  VAR_11->status = VAR_4;
  VAR_8 = VAR_10;
  FUNC_0(VAR_5 * VAR_1,
      VAR_6, 1);
  return 0;
 } else if (VAR_12 == -VAR_0) {

  FUNC_0(VAR_2 * VAR_1,
      VAR_6, 0);
  return 0;
 }

 VAR_11->status = VAR_3;
 return VAR_12;
}
