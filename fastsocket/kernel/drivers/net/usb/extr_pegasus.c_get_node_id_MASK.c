
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pegasus_t ;
typedef int __u8 ;
typedef int __u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int *) ;

__attribute__((used)) static inline void FUNC_2(pegasus_t * VAR_0, __u8 * VAR_1)
{
 int VAR_2;
 __u16 VAR_3;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  FUNC_1(VAR_0, VAR_2, &VAR_3);
  ((__le16 *) VAR_1)[VAR_2] = FUNC_0(VAR_3);
 }
}
