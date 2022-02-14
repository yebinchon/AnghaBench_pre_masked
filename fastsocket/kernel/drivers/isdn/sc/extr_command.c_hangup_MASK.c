
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devicename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,...) ;
 TYPE_1__** VAR_5 ;
 int FUNC_2 (int,int ,int ,int ,int ,unsigned char,int ,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_6, unsigned long VAR_7)
{
 int VAR_8;

 if(!FUNC_0(VAR_6)) {
  FUNC_1("Invalid param: %d is not a valid card id\n", VAR_6);
  return -VAR_1;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_0, VAR_4,
       VAR_2,
       VAR_3,
       (unsigned char) VAR_7+1,
       0,
       ((void*)0));
 FUNC_1("%s: Sent HANGUP message to channel %lu\n",
  VAR_5[VAR_6]->devicename, VAR_7+1);
 return VAR_8;
}
