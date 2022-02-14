
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s2255_dev {int udev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned char,int,int ,int ,void*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static long FUNC_3(struct s2255_dev *VAR_4, unsigned char VAR_5,
        u16 VAR_6, u16 VAR_7, void *VAR_8,
        s32 VAR_9, int VAR_10)
{
 int VAR_11;
 if (!VAR_10) {
  VAR_11 = FUNC_0(VAR_4->udev, FUNC_1(VAR_4->udev, 0),
        VAR_5,
        VAR_3 | VAR_2 |
        VAR_1,
        VAR_7, VAR_6, VAR_8,
        VAR_9, VAR_0 * 5);
 } else {
  VAR_11 = FUNC_0(VAR_4->udev, FUNC_2(VAR_4->udev, 0),
        VAR_5, VAR_3 | VAR_2,
        VAR_7, VAR_6, VAR_8,
        VAR_9, VAR_0 * 5);
 }
 return VAR_11;
}
