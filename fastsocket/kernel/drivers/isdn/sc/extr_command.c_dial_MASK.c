
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phone; } ;
typedef TYPE_1__ setup_parm ;
struct TYPE_5__ {int devicename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,...) ;
 TYPE_2__** VAR_5 ;
 int FUNC_2 (int,int ,int ,int ,int ,unsigned char,int ,unsigned int*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(int VAR_6, unsigned long VAR_7, setup_parm VAR_8)
{
 int VAR_9;
 char VAR_10[48];

 if(!FUNC_0(VAR_6)) {
  FUNC_1("Invalid param: %d is not a valid card id\n", VAR_6);
  return -VAR_1;
 }


 FUNC_3(VAR_10,VAR_8.phone);


 VAR_9 = FUNC_2(VAR_6, VAR_0,VAR_4,
    VAR_2,
    VAR_3,
    (unsigned char) VAR_7+1,
    FUNC_4(VAR_10),
    (unsigned int *) VAR_10);

 FUNC_1("%s: Dialing %s on channel %lu\n",
  VAR_5[VAR_6]->devicename, VAR_10, VAR_7+1);

 return VAR_9;
}
