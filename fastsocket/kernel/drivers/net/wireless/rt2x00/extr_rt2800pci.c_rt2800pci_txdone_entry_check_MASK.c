
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct queue_entry {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct queue_entry*) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct queue_entry *VAR_2, u32 VAR_3)
{
 __le32 *VAR_4;
 u32 VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_1);

 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_4, 1, &VAR_5);
 VAR_7 = FUNC_2(VAR_5, VAR_0);

 return (VAR_7 == VAR_6);
}
