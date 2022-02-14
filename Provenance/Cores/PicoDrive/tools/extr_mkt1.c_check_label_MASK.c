
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int,int,int) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_2)
{
 if (!VAR_1[VAR_2]) {
  FUNC_0(VAR_0, "tile%i%i%i%i%i%i%i%i:\n", (VAR_2&0x80)?1:0, (VAR_2&0x40)?1:0, (VAR_2&0x20)?1:0, (VAR_2&0x10)?1:0,
   (VAR_2&0x08)?1:0, (VAR_2&0x04)?1:0, (VAR_2&0x02)?1:0, (VAR_2&0x01)?1:0);
  VAR_1[VAR_2] = 1;
  return 0;
 }

 return 1;
}
