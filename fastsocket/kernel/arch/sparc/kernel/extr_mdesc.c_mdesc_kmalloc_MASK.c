
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_hdr {int dummy; } ;
struct mdesc_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct mdesc_handle*,unsigned int,void*) ;

__attribute__((used)) static struct mdesc_handle *FUNC_2(unsigned int VAR_2)
{
 unsigned int VAR_3;
 void *VAR_4;

 VAR_3 = (sizeof(struct mdesc_handle) -
         sizeof(struct mdesc_hdr) +
         VAR_2);

 VAR_4 = FUNC_0(VAR_3 + 15, VAR_0 | VAR_1);
 if (VAR_4) {
  struct mdesc_handle *VAR_5;
  unsigned long VAR_6;

  VAR_6 = (unsigned long)VAR_4;
  VAR_6 = (VAR_6 + 15UL) & ~15UL;
  VAR_5 = (struct mdesc_handle *) VAR_6;

  FUNC_1(VAR_5, VAR_3, VAR_4);
  return VAR_5;
 }

 return ((void*)0);
}
