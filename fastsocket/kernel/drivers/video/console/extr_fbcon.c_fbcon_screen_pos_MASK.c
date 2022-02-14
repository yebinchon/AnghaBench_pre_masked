
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {scalar_t__ vc_num; int vc_size_row; scalar_t__ vc_origin; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u16 *FUNC_0(struct vc_data *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_5->vc_num != VAR_0 || !VAR_4)
  return (u16 *) (VAR_5->vc_origin + VAR_6);
 VAR_8 = VAR_6 / VAR_5->vc_size_row;
 if (VAR_8 >= VAR_4)
  return (u16 *) (VAR_5->vc_origin + VAR_6 -
    VAR_4 * VAR_5->vc_size_row);
 VAR_7 = VAR_2 + VAR_6;
 if (VAR_7 >= VAR_3)
  VAR_7 += VAR_1 - VAR_3;
 return (u16 *) VAR_7;
}
