
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {scalar_t__ cpaddr; int op; } ;
struct TYPE_2__ {int idal_buf; } ;
struct tape_device {TYPE_1__ char_data; int * modeset_byte; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int,int *) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int *) ;

void
FUNC_4(struct tape_device *VAR_5, struct tape_request *VAR_6)
{





 VAR_6->op = VAR_4;
 FUNC_1(VAR_6->cpaddr, VAR_1, 1, VAR_5->modeset_byte);
 FUNC_2(VAR_6->cpaddr + 1, VAR_3,
    VAR_5->char_data.idal_buf);
 FUNC_1(VAR_6->cpaddr + 2, VAR_0, 0, ((void*)0));
 FUNC_3(VAR_6->cpaddr + 3, VAR_2, 0, ((void*)0));
 FUNC_0(6, "xrop ccwg");}
