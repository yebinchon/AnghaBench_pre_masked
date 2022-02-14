
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {int vgc_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rt2x00_dev*,int,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_8,
      struct link_qual *VAR_9)
{
 u16 VAR_10;
 u16 VAR_11;

 FUNC_1(VAR_8, VAR_0, &VAR_10);
 VAR_11 = FUNC_2(VAR_10, VAR_1);
 FUNC_0(VAR_8, 24, VAR_11);

 FUNC_1(VAR_8, VAR_2, &VAR_10);
 VAR_11 = FUNC_2(VAR_10, VAR_3);
 FUNC_0(VAR_8, 25, VAR_11);

 FUNC_1(VAR_8, VAR_4, &VAR_10);
 VAR_11 = FUNC_2(VAR_10, VAR_5);
 FUNC_0(VAR_8, 61, VAR_11);

 FUNC_1(VAR_8, VAR_6, &VAR_10);
 VAR_11 = FUNC_2(VAR_10, VAR_7);
 FUNC_0(VAR_8, 17, VAR_11);

 VAR_9->vgc_level = VAR_11;
}
