
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfile_check {scalar_t__ count; struct tfile_check* next; struct epoll_filefd** tfile_arr; } ;
struct epoll_filefd {int added; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tfile_check* VAR_3 ;
 struct tfile_check* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct epoll_filefd *VAR_4)
{
 struct tfile_check *VAR_5;

 if (VAR_3->count < VAR_2) {
  VAR_3->tfile_arr[VAR_3->count++] = VAR_4;
  VAR_4->added = 1;
  return 0;
 }
 VAR_5 = FUNC_0(sizeof(struct tfile_check), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->count = 0;
 VAR_5->next = ((void*)0);
 VAR_5->tfile_arr[VAR_5->count++] = VAR_4;
 VAR_4->added = 1;
 VAR_3->next = VAR_5;
 VAR_3 = VAR_5;

 return 0;
}
