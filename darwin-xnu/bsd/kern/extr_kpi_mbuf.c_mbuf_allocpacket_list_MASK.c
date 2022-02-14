
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
FUNC_1(unsigned int VAR_3, mbuf_how_t VAR_4, size_t VAR_5,
    unsigned int *VAR_6, mbuf_t *VAR_7)
{
 errno_t VAR_8;
 struct mbuf *VAR_9;
 unsigned int VAR_10 = VAR_6 ? *VAR_6 : 0;

 if (VAR_3 == 0) {
  VAR_8 = VAR_0;
  goto out;
 }
 if (VAR_5 == 0) {
  VAR_8 = VAR_0;
  goto out;
 }
 VAR_9 = FUNC_0(&VAR_3, VAR_5,
     VAR_6 ? &VAR_10 : ((void*)0), VAR_4, 1, 0);
 if (VAR_9 == 0) {
  if (VAR_6 && *VAR_6 && VAR_10 > *VAR_6)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_2;
 } else {
  if (VAR_6)
   *VAR_6 = VAR_10;
  VAR_8 = 0;
  *VAR_7 = VAR_9;
 }
out:
 return (VAR_8);
}
