
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int lock; } ;
struct c67x00_device {TYPE_1__ hpi; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c67x00_device*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct c67x00_device *VAR_2, u16 VAR_3,
     __le16 *VAR_4, u16 VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(&VAR_2->hpi.lock, VAR_6);

 FUNC_0(VAR_2, VAR_0, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_0(VAR_2, VAR_1, FUNC_1(*VAR_4++));

 FUNC_3(&VAR_2->hpi.lock, VAR_6);
}
