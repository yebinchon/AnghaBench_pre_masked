
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dcookie_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct list_head* VAR_4 ;
 unsigned int VAR_5 ;
 struct list_head* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,int ,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct list_head * VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = -VAR_0;

 VAR_3 = FUNC_2("dcookie_cache",
  sizeof(struct dcookie_struct),
  0, 0, ((void*)0));

 if (!VAR_3)
  goto out;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_4)
  goto out_kmem;

 VAR_9 = 0;






 VAR_5 = VAR_2 / sizeof(struct list_head);
 VAR_8 = 0;
 do {
  VAR_8++;
 } while ((VAR_5 >> VAR_8) != 0);
 VAR_8--;





 VAR_5 = 1UL << VAR_8;


 VAR_6 = VAR_4;
 VAR_7 = VAR_5;
 do {
  FUNC_0(VAR_6);
  VAR_6++;
  VAR_7--;
 } while (VAR_7);

out:
 return VAR_9;
out_kmem:
 FUNC_3(VAR_3);
 goto out;
}
