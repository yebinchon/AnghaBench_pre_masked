
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaweth_device {int scratch; int dev; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct kaweth_device*,int ,int ,int,scalar_t__,int ,void*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kaweth_device *VAR_5, __u16 VAR_6)
{
 int VAR_7;

 FUNC_0("Setting URB size to %d", (unsigned)VAR_6);

 VAR_7 = FUNC_1(VAR_5,
    FUNC_2(VAR_5->dev, 0),
    VAR_0,
    VAR_4 | VAR_2 | VAR_3,
    VAR_6,
    0,
    (void *)&VAR_5->scratch,
    0,
    VAR_1);

 return VAR_7;
}
