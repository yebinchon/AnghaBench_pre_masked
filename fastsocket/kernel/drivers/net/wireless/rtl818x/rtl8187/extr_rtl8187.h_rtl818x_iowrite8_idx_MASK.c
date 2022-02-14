
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u8 ;
struct rtl8187_priv {int io_mutex; TYPE_1__* io_dmabuf; int udev; } ;
struct TYPE_2__ {int bits8; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,unsigned long,int,int*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct rtl8187_priv *VAR_3,
     u8 *VAR_4, u8 VAR_5, u8 VAR_6)
{
 FUNC_0(&VAR_3->io_mutex);

 VAR_3->io_dmabuf->bits8 = VAR_5;
 FUNC_2(VAR_3->udev, FUNC_3(VAR_3->udev, 0),
   VAR_2, VAR_1,
   (unsigned long)VAR_4, VAR_6 & 0x03,
   &VAR_3->io_dmabuf->bits8, sizeof(VAR_5), VAR_0 / 2);

 FUNC_1(&VAR_3->io_mutex);
}
