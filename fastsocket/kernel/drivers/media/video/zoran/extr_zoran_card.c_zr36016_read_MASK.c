
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct zoran {int dummy; } ;
struct videocodec {TYPE_1__* master_data; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (struct zoran*,int,int) ;
 scalar_t__ FUNC_1 (struct zoran*) ;

__attribute__((used)) static u32
FUNC_2 (struct videocodec *VAR_0,
       u16 VAR_1)
{
 struct zoran *VAR_2 = (struct zoran *) VAR_0->master_data->data;
 __u32 VAR_3;

 if (FUNC_1(VAR_2)) {
  return -1;
 }

 VAR_3 = FUNC_0(VAR_2, 2, VAR_1 & 0x03) & 0xff;
 return VAR_3;
}
