
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ ext3_grpblk_t ;


 scalar_t__ FUNC_0 (scalar_t__,struct buffer_head*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,struct buffer_head*) ;
 char* FUNC_4 (char*,int ,scalar_t__) ;

__attribute__((used)) static ext3_grpblk_t
FUNC_5(ext3_grpblk_t VAR_0, struct buffer_head *VAR_1,
   ext3_grpblk_t VAR_2)
{
 ext3_grpblk_t VAR_3, VAR_4;
 char *VAR_5, *VAR_6;

 if (VAR_0 > 0) {
  ext3_grpblk_t VAR_7 = (VAR_0 + 63) & ~63;
  if (VAR_7 > VAR_2)
   VAR_7 = VAR_2;
  VAR_3 = FUNC_2(VAR_1->b_data, VAR_7, VAR_0);
  if (VAR_3 < VAR_7 && FUNC_3(VAR_3, VAR_1))
   return VAR_3;
  FUNC_1("Bit not found near goal\n");
 }

 VAR_3 = VAR_0;
 if (VAR_3 < 0)
  VAR_3 = 0;

 VAR_5 = ((char *)VAR_1->b_data) + (VAR_3 >> 3);
 VAR_6 = FUNC_4(VAR_5, 0, ((VAR_2 + 7) >> 3) - (VAR_3 >> 3));
 VAR_4 = (VAR_6 - ((char *)VAR_1->b_data)) << 3;

 if (VAR_4 < VAR_2 && VAR_4 >= VAR_0 && FUNC_3(VAR_4, VAR_1))
  return VAR_4;






 VAR_3 = FUNC_0(VAR_3, VAR_1, VAR_2);
 return VAR_3;
}
