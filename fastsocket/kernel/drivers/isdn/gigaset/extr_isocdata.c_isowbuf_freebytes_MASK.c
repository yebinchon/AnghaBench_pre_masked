
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isowbuf_t {int read; int write; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct isowbuf_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = VAR_2->read;
 VAR_4 = VAR_2->write;
 if ((VAR_5 = VAR_3 - VAR_4) > 0) {

  return VAR_5 - VAR_0;
 } else if (VAR_3 < VAR_0) {

  return VAR_1 - VAR_4;
 } else {

  return VAR_5 + VAR_1 - VAR_0;
 }
}
