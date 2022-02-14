
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaweth_device {int configuration; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct kaweth_device*,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kaweth_device *VAR_5)
{
 int VAR_6;

 FUNC_0("Reading kaweth configuration");

 VAR_6 = FUNC_1(VAR_5,
    FUNC_2(VAR_5->dev, 0),
    VAR_0,
    VAR_4 | VAR_2 | VAR_3,
    0,
    0,
    (void *)&VAR_5->configuration,
    sizeof(VAR_5->configuration),
    VAR_1);

 return VAR_6;
}
