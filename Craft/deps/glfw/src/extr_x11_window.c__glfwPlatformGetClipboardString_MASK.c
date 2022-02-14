
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int formats ;
struct TYPE_9__ {int handle; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_10__ {scalar_t__ property; int requestor; int target; } ;
struct TYPE_13__ {TYPE_2__ xselection; } ;
typedef TYPE_5__ XEvent ;
struct TYPE_11__ {char const* clipboardString; int display; int GLFW_SELECTION; int CLIPBOARD; int const COMPOUND_STRING; int const UTF8_STRING; } ;
struct TYPE_14__ {TYPE_3__ x11; } ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int const,int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_7__ VAR_5 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,unsigned char**) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;
 char const* FUNC_10 (char*) ;

const char* FUNC_11(_GLFWwindow* VAR_6)
{
    size_t VAR_7;
    const Atom VAR_8[] = { VAR_5.x11.UTF8_STRING,
                             VAR_5.x11.COMPOUND_STRING,
                             VAR_4 };
    const size_t VAR_9 = sizeof(VAR_8) / sizeof(VAR_8[0]);

    if (FUNC_7(FUNC_4(VAR_5.x11.display,
                                              VAR_5.x11.CLIPBOARD)))
    {


        return VAR_5.x11.clipboardString;
    }

    FUNC_8(VAR_5.x11.clipboardString);
    VAR_5.x11.clipboardString = ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    {
        char* VAR_10;
        XEvent VAR_11;

        FUNC_1(VAR_5.x11.display,
                          VAR_5.x11.CLIPBOARD,
                          VAR_8[VAR_7],
                          VAR_5.x11.GLFW_SELECTION,
                          VAR_6->x11.handle, VAR_0);



        while (!FUNC_0(VAR_5.x11.display, VAR_3, &VAR_11))
            FUNC_9(((void*)0));

        if (VAR_11.xselection.property == VAR_2)
            continue;

        if (FUNC_5(VAR_11.xselection.requestor,
                                   VAR_11.xselection.property,
                                   VAR_11.xselection.target,
                                   (unsigned char**) &VAR_10))
        {
            VAR_5.x11.clipboardString = FUNC_10(VAR_10);
        }

        FUNC_3(VAR_10);

        FUNC_2(VAR_5.x11.display,
                        VAR_11.xselection.requestor,
                        VAR_11.xselection.property);

        if (VAR_5.x11.clipboardString)
            break;
    }

    if (VAR_5.x11.clipboardString == ((void*)0))
    {
        FUNC_6(VAR_1,
                        "X11: Failed to convert clipboard to string");
    }

    return VAR_5.x11.clipboardString;
}
