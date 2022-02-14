
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {struct block_device* bd_contains; } ;
typedef int Sector ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,void*,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct block_device*,int ,int *) ;

unsigned char *FUNC_5(struct block_device *VAR_1)
{
 unsigned char *VAR_2 = FUNC_1(66, VAR_0);
 if (VAR_2) {
  struct block_device *VAR_3 = VAR_1->bd_contains;
  Sector VAR_4;
  void *VAR_5 = FUNC_4(VAR_3, 0, &VAR_4);
  if (VAR_5) {
   FUNC_2(VAR_2, VAR_5 + 0x1be, 66);
   FUNC_3(VAR_4);
  } else {
   FUNC_0(VAR_2);
   VAR_2 = ((void*)0);
  }
 }
 return VAR_2;
}
