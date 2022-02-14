
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {scalar_t__ raw; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(union ib_gid *VAR_0, char *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0, VAR_2 = 0; VAR_2 < 8; ++VAR_2) {
  VAR_3 += FUNC_1(VAR_1 + VAR_3, "%x",
        FUNC_0(((__be16 *) VAR_0->raw)[VAR_2]));
  if (VAR_2 < 7)
   VAR_1[VAR_3++] = ':';
 }
}
