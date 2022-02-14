
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int dummy; } ;
struct ldc_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,unsigned long*) ;
 int FUNC_1 (struct ldc_packet*,void const*,unsigned int) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_3, const void *VAR_4, unsigned int VAR_5)
{
 struct ldc_packet *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_5 > VAR_2)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3, &VAR_7);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_4, VAR_5);

 VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_7);
 if (!VAR_8)
  VAR_8 = VAR_5;

 return VAR_8;
}
