
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; struct rt2x00_async_read_data* context; } ;
struct rt2x00_async_read_data {int reg; int rt2x00dev; scalar_t__ (* callback ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_async_read_data*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct rt2x00_async_read_data *VAR_2 = VAR_1->context;
 if (VAR_2->callback(VAR_2->rt2x00dev, VAR_1->status, FUNC_1(VAR_2->reg))) {
  if (FUNC_3(VAR_1, VAR_0) < 0)
   FUNC_0(VAR_2);
 } else
  FUNC_0(VAR_2);
}
