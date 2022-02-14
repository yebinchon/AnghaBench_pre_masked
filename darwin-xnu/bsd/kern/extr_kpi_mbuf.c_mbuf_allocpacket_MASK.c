
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
typedef struct mbuf* mbuf_t ;
typedef int mbuf_how_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mbuf* FUNC_0 (unsigned int*,size_t,unsigned int*,int ,int,int ) ;

errno_t
FUNC_1(mbuf_how_t VAR_3, size_t VAR_4, unsigned int *VAR_5,
    mbuf_t *VAR_6)
{
 errno_t VAR_7;
 struct mbuf *VAR_8;
 unsigned int VAR_9 = 1;
 unsigned int VAR_10 = VAR_5 ? *VAR_5 : 0;

 if (VAR_4 == 0) {
  VAR_7 = VAR_0;
  goto out;
 }
 VAR_8 = FUNC_0(&VAR_9, VAR_4,
     VAR_5 ? &VAR_10 : ((void*)0), VAR_3, 1, 0);
 if (VAR_8 == 0) {
  if (VAR_5 && *VAR_5 && VAR_10 > *VAR_5)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_2;
 } else {
  if (VAR_5)
   *VAR_5 = VAR_10;
  VAR_7 = 0;
  *VAR_6 = VAR_8;
 }
out:
 return (VAR_7);
}
