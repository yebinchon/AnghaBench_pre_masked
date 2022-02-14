
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct zoran {int dummy; } ;
struct videocodec {TYPE_1__* master_data; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (struct zoran*) ;
 scalar_t__ FUNC_1 (struct zoran*,int,int,int) ;

__attribute__((used)) static void
FUNC_2 (struct videocodec *VAR_0,
        u16 VAR_1,
        u32 VAR_2)
{
 struct zoran *VAR_3 = (struct zoran *) VAR_0->master_data->data;

 if (FUNC_0(VAR_3)
     || FUNC_1(VAR_3, 1, 0, VAR_1 >> 2)) {
  return;
 }

 FUNC_1(VAR_3, 0, VAR_1 & 0x03, VAR_2 & 0xff);
}
