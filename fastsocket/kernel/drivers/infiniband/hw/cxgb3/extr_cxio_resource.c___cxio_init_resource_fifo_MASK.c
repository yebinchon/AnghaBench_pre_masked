
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kfifo {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kfifo*) ;
 int VAR_2 ;
 int FUNC_1 (struct kfifo*,unsigned char*,int) ;
 struct kfifo* FUNC_2 (int,int ,int *) ;
 int FUNC_3 (struct kfifo*,unsigned char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kfifo **VAR_3,
       spinlock_t *VAR_4,
       u32 VAR_5, u32 VAR_6,
       u32 VAR_7,
       int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11 = 0, VAR_12;
 u32 VAR_13;
 u32 VAR_14[16];
 FUNC_5(VAR_4);

 *VAR_3 = FUNC_2(VAR_5 * sizeof(u32), VAR_1, VAR_4);
 if (FUNC_0(*VAR_3))
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6 + VAR_7; VAR_9++)
  FUNC_1(*VAR_3, (unsigned char *) &VAR_11, sizeof(u32));
 if (VAR_8) {
  VAR_10 = 0;
  VAR_13 = FUNC_4();
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_14[VAR_9] = VAR_9 + VAR_6;
  for (VAR_9 = VAR_6 + VAR_2; VAR_9 < VAR_5 - VAR_7; VAR_9++) {
   if (VAR_10 >= VAR_2) {
    VAR_10 = 0;
    VAR_13 = FUNC_4();
   }
   VAR_12 = (VAR_13 >> (VAR_10 * 2)) & 0xF;
   FUNC_1(*VAR_3,
    (unsigned char *) &VAR_14[VAR_12],
    sizeof(u32));
   VAR_14[VAR_12] = VAR_9;
   VAR_10++;
  }
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   FUNC_1(*VAR_3,
    (unsigned char *) &VAR_14[VAR_9],
    sizeof(u32));
 } else
  for (VAR_9 = VAR_6; VAR_9 < VAR_5 - VAR_7; VAR_9++)
   FUNC_1(*VAR_3, (unsigned char *) &VAR_9, sizeof(u32));

 for (VAR_9 = 0; VAR_9 < VAR_6 + VAR_7; VAR_9++)
  FUNC_3(*VAR_3, (unsigned char *) &VAR_11, sizeof(u32));
 return 0;
}
