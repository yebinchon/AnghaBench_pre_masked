
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* inl; scalar_t__ fd; int* inp; scalar_t__ inb; } ;
typedef TYPE_1__ Source ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,char*,int) ;

int
FUNC_2(Source *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_4/8;
 if ((char *)VAR_5->inl+VAR_7 > (char *)VAR_5->inb+VAR_4)
  FUNC_0(VAR_3, "Input buffer overflow");
 if (VAR_5->fd<0 || (VAR_6=FUNC_1(VAR_5->fd, (char *)VAR_5->inl, VAR_4/8)) <= 0)
  VAR_6 = 0;
 if ((*VAR_5->inp&0xff) == VAR_0)
  *VAR_5->inp = VAR_2;
 VAR_5->inl += VAR_6;
 VAR_5->inl[0] = VAR_5->inl[1]= VAR_5->inl[2]= VAR_5->inl[3] = VAR_0;
 if (VAR_6==0) {
  VAR_5->inl[0] = VAR_5->inl[1]= VAR_5->inl[2]= VAR_5->inl[3] = VAR_2;
  return VAR_1;
 }
 return 0;
}
