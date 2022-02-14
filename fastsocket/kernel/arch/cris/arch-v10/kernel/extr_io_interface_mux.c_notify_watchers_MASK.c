
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watcher {struct watcher* next; int (* notify ) (unsigned int const,unsigned int const,unsigned char const,unsigned char const) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned int const,unsigned int const,unsigned char const,unsigned char const) ;
 struct watcher* VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct watcher *VAR_5 = VAR_4;

 FUNC_0(FUNC_1("io_interface_mux: notifying watchers\n"));

 while (((void*)0) != VAR_5) {
  VAR_5->notify((const unsigned int)VAR_0,
     (const unsigned int)VAR_1,
     (const unsigned char)VAR_2,
     (const unsigned char)VAR_3);
  VAR_5 = VAR_5->next;
 }
}
