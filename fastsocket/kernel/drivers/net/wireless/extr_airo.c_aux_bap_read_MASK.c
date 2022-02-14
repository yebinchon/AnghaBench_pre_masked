
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct airo_info {int aux_lock; TYPE_1__* dev; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct airo_info*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct airo_info*,int,int,int*) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct airo_info *VAR_5, __le16 *VAR_6,
   int VAR_7, int VAR_8)
{
 u16 VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 int VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 FUNC_4(&VAR_5->aux_lock, VAR_15);
 VAR_10 = FUNC_0(VAR_5, VAR_2+VAR_8);
 VAR_11 = FUNC_0(VAR_5, VAR_3+VAR_8);
 VAR_12 = FUNC_1(VAR_5, VAR_10, VAR_11, &VAR_9);
 VAR_13 = (VAR_7+1)>>1;

 for (VAR_14=0; VAR_14<VAR_13;) {
  int VAR_16;
  VAR_16 = (VAR_9>>1) < (VAR_13-VAR_14) ? (VAR_9>>1) : (VAR_13-VAR_14);
  if ( !VAR_4 )
   FUNC_3( VAR_5->dev->base_addr+VAR_0+VAR_8,
         VAR_6+VAR_14,VAR_16 );
  else
   FUNC_2( VAR_5->dev->base_addr+VAR_0+VAR_8,
         VAR_6+VAR_14, VAR_16 << 1 );
  VAR_14 += VAR_16;
  if (VAR_14<VAR_13) {
   VAR_12 = FUNC_1(VAR_5, VAR_12, 4, &VAR_9);
  }
 }
 FUNC_5(&VAR_5->aux_lock, VAR_15);
 return VAR_1;
}
