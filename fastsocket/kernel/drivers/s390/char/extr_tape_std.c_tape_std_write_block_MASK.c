
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {scalar_t__ cpaddr; int op; } ;
struct TYPE_2__ {int idal_buf; } ;
struct tape_device {TYPE_1__ char_data; int modeset_byte; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tape_request* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,int ,int,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;

struct tape_request *
FUNC_6(struct tape_device *VAR_3, size_t VAR_4)
{
 struct tape_request *VAR_5;

 VAR_5 = FUNC_3(2, 0);
 if (FUNC_2(VAR_5)) {
  FUNC_1(6, "xwbl fail\n");
  return VAR_5;
 }
 VAR_5->op = VAR_1;
 FUNC_4(VAR_5->cpaddr, VAR_0, 1, VAR_3->modeset_byte);
 FUNC_5(VAR_5->cpaddr + 1, VAR_2,
     VAR_3->char_data.idal_buf);
 FUNC_0(6, "xwbl ccwg\n");
 return VAR_5;
}
