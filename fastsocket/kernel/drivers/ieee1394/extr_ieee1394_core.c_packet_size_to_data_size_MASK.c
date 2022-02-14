
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(size_t VAR_0, size_t VAR_1,
           size_t VAR_2, int VAR_3)
{
 size_t VAR_4 = VAR_0 <= VAR_1 ? 0 : VAR_0 - VAR_1;

 if (FUNC_1(VAR_4 > VAR_2))
  VAR_4 = VAR_2;

 if (FUNC_1(VAR_4 + VAR_1 != VAR_0))
  FUNC_0("unexpected packet size %zd (tcode %d), bug?",
    VAR_0, VAR_3);
 return VAR_4;
}
