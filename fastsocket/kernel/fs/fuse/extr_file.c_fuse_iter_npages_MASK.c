
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long FUNC_0 (struct iov_iter*) ;
 int FUNC_1 (struct iov_iter*,size_t) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 size_t FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline int FUNC_5(const struct iov_iter *VAR_4)
{
 struct iov_iter VAR_5 = *VAR_4;
 int VAR_6 = 0;

 while (FUNC_2(&VAR_5) && VAR_6 < VAR_0) {
  unsigned long VAR_7 = FUNC_0(&VAR_5);
  unsigned VAR_8 = VAR_7 & ~VAR_1;
  size_t VAR_9 = FUNC_3(&VAR_5);

  VAR_6 += (VAR_9 + VAR_8 + VAR_3 - 1) >> VAR_2;
  FUNC_1(&VAR_5, VAR_9);
 }

 return FUNC_4(VAR_6, VAR_0);
}
