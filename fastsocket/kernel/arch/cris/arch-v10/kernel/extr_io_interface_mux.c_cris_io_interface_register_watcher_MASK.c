
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watcher {void (* notify ) (unsigned int const,unsigned int const,unsigned char const,unsigned char const) ;struct watcher* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct watcher* FUNC_1 (int,int ) ;
 void FUNC_2 (unsigned int const,unsigned int const,unsigned char const,unsigned char const) ;
 struct watcher* VAR_7 ;

int FUNC_3(void (*VAR_8)(const unsigned int VAR_9,
                                                      const unsigned int VAR_10,
                                                      const unsigned char VAR_11,
                                                      const unsigned char VAR_12))
{
 struct watcher *VAR_13;

 (void)FUNC_0();

 if (((void*)0) == VAR_8) {
  return -VAR_0;
 }
 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  return -VAR_1;
 }
 VAR_13->notify = VAR_8;
 VAR_13->next = VAR_7;
 VAR_7 = VAR_13;

 VAR_13->notify((const unsigned int)VAR_3,
    (const unsigned int)VAR_4,
    (const unsigned char)VAR_5,
    (const unsigned char)VAR_6);

 return 0;
}
