
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
struct whc {scalar_t__ base; TYPE_1__* umc; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int*,void const*,size_t) ;
 int FUNC_3 (int *,scalar_t__,int,int ,int,char*) ;

__attribute__((used)) static int FUNC_4(struct whc *VAR_5, u8 VAR_6, uint32_t VAR_7,
         const void *VAR_8, size_t VAR_9, bool VAR_10)
{
 uint32_t VAR_11;
 uint32_t VAR_12[4];
 int VAR_13;
 int VAR_14;

 FUNC_2(VAR_12, VAR_8, VAR_9);
 VAR_11 = VAR_3 | FUNC_0(VAR_6);
 if (VAR_10)
  VAR_11 |= VAR_2;

 FUNC_1(VAR_7, VAR_5->base + VAR_4);
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  FUNC_1(VAR_12[VAR_13], VAR_5->base + VAR_0 + 4*VAR_13);
 FUNC_1(VAR_11, VAR_5->base + VAR_1);

 VAR_14 = FUNC_3(&VAR_5->umc->dev, VAR_5->base + VAR_1,
       VAR_3, 0, 100, "set key");

 return VAR_14;
}
