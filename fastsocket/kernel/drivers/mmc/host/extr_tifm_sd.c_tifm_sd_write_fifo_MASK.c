
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {int cmd_flags; unsigned char* bounce_buf_data; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char* FUNC_0 (struct page*,int ) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tifm_sd *VAR_3, struct page *VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 struct tifm_dev *VAR_7 = VAR_3->dev;
 unsigned char *VAR_8;
 unsigned int VAR_9 = 0, VAR_10;

 VAR_8 = FUNC_0(VAR_4, VAR_1) + VAR_5;
 if (VAR_3->cmd_flags & VAR_0) {
  VAR_10 = VAR_3->bounce_buf_data[0] | ((VAR_8[VAR_9++] << 8) & 0xff00);
  FUNC_2(VAR_10, VAR_7->addr + VAR_2);
  VAR_3->cmd_flags &= ~VAR_0;
 }

 while (VAR_9 < VAR_6) {
  VAR_10 = VAR_8[VAR_9++];
  if (VAR_9 == VAR_6) {
   VAR_3->bounce_buf_data[0] = VAR_10 & 0xff;
   VAR_3->cmd_flags |= VAR_0;
   break;
  }
  VAR_10 |= (VAR_8[VAR_9++] << 8) & 0xff00;
  FUNC_2(VAR_10, VAR_7->addr + VAR_2);
 }
 FUNC_1(VAR_8 - VAR_5, VAR_1);
}
